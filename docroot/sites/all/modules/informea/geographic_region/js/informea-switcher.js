(function($) {
    $(function() {

        var SETTINGS = {
            navBarTravelling: false,
            navBarTravelDirection: "",
            navBarTravelDistance: 150
        }

        document.documentElement.classList.remove("no-js");
        document.documentElement.classList.add("js");

        // Out advancer buttons
        var informeaSwitchAdvancerLeft = document.getElementById("informeaSwitchAdvancerLeft");
        var informeaSwitchAdvancerRight = document.getElementById("informeaSwitchAdvancerRight");

        var informeaSwitch = document.getElementById("informeaSwitch");
        var informeaSwitchContents = document.getElementById("informeaSwitchContents");

        informeaSwitch.setAttribute("data-overflowing", determineOverflow(informeaSwitchContents, informeaSwitch));

        // Handle the scroll of the horizontal container
        var last_known_scroll_position = 0;
        var ticking = false;

        function doSomething(scroll_pos) {
            informeaSwitch.setAttribute("data-overflowing", determineOverflow(informeaSwitchContents, informeaSwitch));
        }

        informeaSwitch.addEventListener("scroll", function() {
            last_known_scroll_position = window.scrollY;
            if (!ticking) {
                window.requestAnimationFrame(function() {
                    doSomething(last_known_scroll_position);
                    ticking = false;
                });
            }
            ticking = true;
        });


        informeaSwitchAdvancerLeft.addEventListener("click", function() {
            // If in the middle of a move return
            if (SETTINGS.navBarTravelling === true) {
                return;
            }
            // If we have content overflowing both sides or on the left
            if (determineOverflow(informeaSwitchContents, informeaSwitch) === "left" || determineOverflow(informeaSwitchContents, informeaSwitch) === "both") {
                // Find how far this panel has been scrolled
                var availableScrollLeft = informeaSwitch.scrollLeft;
                // If the space available is less than two lots of our desired distance, just move the whole amount
                // otherwise, move by the amount in the settings
                if (availableScrollLeft < SETTINGS.navBarTravelDistance * 2) {
                    informeaSwitchContents.style.transform = "translateX(" + availableScrollLeft + "px)";
                } else {
                    informeaSwitchContents.style.transform = "translateX(" + SETTINGS.navBarTravelDistance + "px)";
                }
                // We do want a transition (this is set in CSS) when moving so remove the class that would prevent that
                informeaSwitchContents.classList.remove("informea-switcher_contents-no-transition");
                // Update our settings
                SETTINGS.navBarTravelDirection = "left";
                SETTINGS.navBarTravelling = true;
            }
            // Now update the attribute in the DOM
            informeaSwitch.setAttribute("data-overflowing", determineOverflow(informeaSwitchContents, informeaSwitch));
        });

        informeaSwitchAdvancerRight.addEventListener("click", function() {
            // If in the middle of a move return
            if (SETTINGS.navBarTravelling === true) {
                return;
            }
            // If we have content overflowing both sides or on the right
            if (determineOverflow(informeaSwitchContents, informeaSwitch) === "right" || determineOverflow(informeaSwitchContents, informeaSwitch) === "both") {
                // Get the right edge of the container and content
                var navBarRightEdge = informeaSwitchContents.getBoundingClientRect().right;
                var navBarScrollerRightEdge = informeaSwitch.getBoundingClientRect().right;
                // Now we know how much space we have available to scroll
                var availableScrollRight = Math.floor(navBarRightEdge - navBarScrollerRightEdge);
                // If the space available is less than two lots of our desired distance, just move the whole amount
                // otherwise, move by the amount in the settings
                if (availableScrollRight < SETTINGS.navBarTravelDistance * 2) {
                    informeaSwitchContents.style.transform = "translateX(-" + availableScrollRight + "px)";
                } else {
                    informeaSwitchContents.style.transform = "translateX(-" + SETTINGS.navBarTravelDistance + "px)";
                }
                // We do want a transition (this is set in CSS) when moving so remove the class that would prevent that
                informeaSwitchContents.classList.remove("informea-switcher_contents-no-transition");
                // Update our settings
                SETTINGS.navBarTravelDirection = "right";
                SETTINGS.navBarTravelling = true;
            }
            // Now update the attribute in the DOM
            informeaSwitch.setAttribute("data-overflowing", determineOverflow(informeaSwitchContents, informeaSwitch));
        });

        informeaSwitchContents.addEventListener(
            "transitionend",
            function() {
                // get the value of the transform, apply that to the current scroll position (so get the scroll pos first) and then remove the transform
                var styleOfTransform = window.getComputedStyle(informeaSwitchContents, null);
                var tr = styleOfTransform.getPropertyValue("-webkit-transform") || styleOfTransform.getPropertyValue("transform");
                // If there is no transition we want to default to 0 and not null
                var amount = Math.abs(parseInt(tr.split(",")[4]) || 0);
                informeaSwitchContents.style.transform = "none";
                informeaSwitchContents.classList.add("informea-switcher_contents-no-transition");
                // Now lets set the scroll position
                if (SETTINGS.navBarTravelDirection === "left") {
                    informeaSwitch.scrollLeft = informeaSwitch.scrollLeft - amount;
                } else {
                    informeaSwitch.scrollLeft = informeaSwitch.scrollLeft + amount;
                }
                SETTINGS.navBarTravelling = false;
            },
            false
        );

        // Handle setting the currently active link
        informeaSwitchContents.addEventListener("click", function(e) {
            var links = [].slice.call(document.querySelectorAll(".js-informea-switcher_link"));
            links.forEach(function(item) {
                item.setAttribute("aria-selected", "false");
            })
            e.target.setAttribute("aria-selected", "true");
        });

        function determineOverflow(content, container) {
            var containerMetrics = container.getBoundingClientRect();
            var containerMetricsRight = Math.floor(containerMetrics.right);
            var containerMetricsLeft = Math.floor(containerMetrics.left);
            var contentMetrics = content.getBoundingClientRect();
            var contentMetricsRight = Math.floor(contentMetrics.right);
            var contentMetricsLeft = Math.floor(contentMetrics.left);
             if (containerMetricsLeft > contentMetricsLeft && containerMetricsRight < contentMetricsRight) {
                return "both";
            } else if (contentMetricsLeft < containerMetricsLeft) {
                return "left";
            } else if (contentMetricsRight > containerMetricsRight) {
                return "right";
            } else {
                return "none";
            }
        }
    });
}(jQuery));
