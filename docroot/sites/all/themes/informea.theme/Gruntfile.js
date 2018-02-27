module.exports = function (grunt) {
  'use strict';

  grunt.loadNpmTasks('grunt-contrib-clean');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-copy');
  grunt.loadNpmTasks('grunt-contrib-cssmin');
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-postcss');

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    clean: {
      // css: {
      //   src: ['css']
      // },
      libraries: {
        src: ['libraries']
      }
    },
    copy: {
      libraries: {
        expand: true,
        cwd: 'node_modules',
        dest: './libraries/',
        src: [
          'bootstrap/less/**',
          'ion-rangeslider/**',
        ]
      }
    },
    less: {
      options: {
        outputSourceFiles: true,
        sourceMap: true,
        relativeUrls: false,
        plugins: [
          require('less-plugin-glob')
        ]
      },
      screen: {
        files: {
          'css/bootstrap.css': 'less/bootstrap.less',
          'css/style-from-less.css': 'less/style.less'
        }
      },
      print: {
        options: {
          outputSourceFiles: false,
          sourceMap: false
        },
        files: {
          'css/print-style.css': 'less/print-style.less'
        }
      }
    },
    cssmin: {
      screen: {
        files: [{
          expand: true,
          cwd: 'css',
          src: 'style.css',
          dest: 'css',
          ext: '.css'
        }]
      },
      print: {
        files: [{
          expand: true,
          cwd: 'css',
          src: 'print-style.css',
          dest: 'css',
          ext: '.css'
        }]
      }
    },
    postcss: {
      options: {
        processors: [
          require('postcss-cssnext')({
            features: {
              rem: {
                rootValue: 10
              }
            }
          }),
          require('postcss-flexibility'),
          require('postcss-rtl')
        ],
        map: {
          inline: false, // save all sourcemaps as separate files...
          annotation: 'css/' // ...to the specified directory
        },
      },
      bootstrap: {
        src: [ 'css/bootstrap.css', '../bootstrap/css/overrides.css' ]
      },
      oldtheme: {
        src: [ 'css/style.css']
      },
      newtheme: {
        src: [
          'css/style-from-less.css',
        ]
      }
    },
    watch: {
      configFiles: {
        options: {
          reload: true
        },
        files: ['Gruntfile.js', 'package.json']
      },
      print: {
        files: ['less/print-style.less'],
        tasks: 'less:print'
      },
      oldtheme: {
        files: ['css/style.css'],
        tasks: ['postcss:oldtheme']
      },
      newtheme: {
        files: ['less/**/*.less', '!less/print-style.less', 'img/*.svg'],
        tasks: ['less:screen', 'postcss:newtheme']
      }
    },
  });


  grunt.registerTask('css', ['less', 'postcss', 'watch']);

  grunt.registerTask('libraries', ['clean:libraries', 'copy:libraries']);

  grunt.registerTask('build', ['libraries', 'less', 'postcss']);

  grunt.registerTask('default', ['css']);

};
