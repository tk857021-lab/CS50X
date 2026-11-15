# My Portfolio Website

#### Video Demo: https://youtu.be/YWtOR8TzTn0

#### Description:

This project is a personal portfolio website built as a final project. It showcases who I am, my skills, my project, and how to get in touch with me. The site is built with HTML, CSS, JavaScript, and Bootstrap, and is structured as a multi-page site rather than a single scrolling page.

The website consists of five pages:

- **Home (`portfolio.html`)** — The landing page, with a short introduction and a dark mode toggle.
- **About (`about.html`)** — Background on who I am and my hobbies.
- **Skills (`skill.html`)** — My technical skills (HTML, CSS, JavaScript, Bootstrap), shown with Bootstrap progress bars, plus my educational background.
- **Project (`project.html`)** — A description of this portfolio site itself as my featured project.
- **Contact (`contact.html`)** — My email address for anyone who wants to reach out.

#### Why I built it this way:

I used a multi-page structure instead of a single-page site so each section could be fully developed on its own, with a shared navigation bar linking every page together. I used Bootstrap for layout and components (the grid system, nav pills, progress bars) so I could build a responsive page quickly, then wrote my own CSS inline in each page's `<style>` block to adjust the look beyond Bootstrap's defaults.

JavaScript on this site is used for one feature: a dark mode toggle button on the Home page that adds/removes a `dark-mode` class on `<body>` to switch between light and dark color schemes.

#### File structure:

```
project/
├── portfolio.html   # Home page (includes dark mode script)
├── about.html        # About page
├── skill.html          # Skills + education page
├── project.html          # Project showcase page
├── contact.html            # Contact page
└── README.md                # This file
```

#### Design decisions and challenges:

Keeping the navigation bar identical across five separate HTML files was the main challenge, since there's no shared layout file — any change to the navbar has to be manually repeated on every page. I handled this by finalizing the navbar structure first, then copying it into each new page before adding that page's unique content.

#### How to run it:

This is a static site with no backend. Open `portfolio.html` directly in a browser, or serve the folder locally (e.g. with the VS Code Live Server extension or `python3 -m http.server`).

#### Future improvements:

Given more time, I'd add a real contact form (currently it's just an email address), expand the Project page to include more than one project, extend the dark mode toggle to work across all pages instead of just Home, and move the repeated navbar/styles into a shared stylesheet to cut down on duplication.
