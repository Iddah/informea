<?php
function ds_informea_teaser() {
    return array(
        'label' => t('Informea teaser'),
        'regions' => array(
            'left' => t('Left'),
            'right' => t('Right'),
        ),
        // Add this line if there is a default css file.
        'css' => FALSE,
        // Add this line if you're using DS 2.x for icon preview
        'image' => TRUE,
    );
}
