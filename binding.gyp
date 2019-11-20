{
  "targets": [
    {
      "target_name": "bringToFront",
      "sources": [ 
        "src/index.cc",
        "<(module_root_dir)/src/win32/pidToFront.cc",
        
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "libraries": [
      ]
    }
  ]
}