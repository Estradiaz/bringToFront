




<!-- PROJECT LOGO -->
<br />
<p align="center">
  <!-- <a href="https://github.com/estradiaz/bringToFront">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a> -->

  <h3 align="center">window to front</h3>

  <p align="center">
    native nodejs plugin to bring window of pid to foreground (currently windows only)
    <br />
    <!-- <a href="https://github.com/github_username/repo"><strong>Explore the docs »</strong></a> -->
    <br />
    <br />
    <!-- <a href="https://github.com/github_username/repo">View Demo</a> -->
    ·
    <a href="https://github.com/estradiaz/bringToFront/issues">Report Bug</a>
    ·
    <a href="https://github.com/estradiaz/bringToFront/issues">Request Feature</a>
  </p>
</p>


<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites
  
* node-gyp
  

### Installation
 
1. Clone the repo
```sh
git clone https://github.com/estradiaz/bringToFront.git
```
2. Install NPM packages
```sh
npm install
```



<!-- USAGE EXAMPLES -->
## Usage

```
const { pid } = require("bringToFront");

const hwnd = pid(process.pid)
if(hwnd > 0){

    console.log("window handle: " + hwnd)
} else{

    console.log("window not found - pid valid?")
} 
```

<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/github_username/repo/issues) for a list of proposed features (and known issues).



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

<!-- Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email -->

Project Link: [https://github.com/estradiaz/bringToFront](https://github.com/estradiaz/bringToFront)



