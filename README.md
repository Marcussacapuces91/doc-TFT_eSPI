# TFT_eSPI Documentation

[![Documentation Status](https://readthedocs.org/projects/doc-tft-espi/badge/?version=latest)](https://doc-tft-espi.readthedocs.io)

Here you will find a documentation project for the [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) library using Read the
Docs. You are encouraged to help me with this documentation project.

Read the Docs Dashboard: https://beta.readthedocs.org/projects/doc-tft-espi/

------

:books:[docs/](https://github.com/Marcussacapuces91/doc-TFT_eSPI/tree/main/docs)<br>
The various files are mainly in Markdown format as the source of the documentation. They are "compiled" with
[MkDocs](https://mkdocs.readthedocs.io/en/stable/) before being published on the
[Read the Docs](https://doc-tft-espi.readthedocs.io/) website.

:gear:[.readthedocs.yaml](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/.readthedocs.yaml)<br>
Read the Docs Build configuration is stored in `.readthedocs.yaml`.

:gear:[mkdocs.yml](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/mkdocs.yml)<br>
This file allows the [configuration](https://www.mkdocs.org/user-guide/configuration/) of MkDocs behavior, particularly
the implementation of Markdown or MkDocs extensions.

:round_pushpin:[docs/requirements.txt](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/docs/requirements.txt) 
and [docs/requirements.in](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/docs/requirements.in)<br>
Python dependencies are [pinned](https://docs.readthedocs.io/en/latest/guides/reproducible-builds.html)
(uses [pip-tools](https://pip-tools.readthedocs.io/en/latest/)) here. Make sure to add your Python dependencies to
`requirements.txt` or if you choose [pip-tools](https://pip-tools.readthedocs.io/en/latest/), edit
`docs/requirements.in` and remember to run `pip-compile docs/requirements.in`.

:scroll:[README.md](https://github.com/readthedocs-examples/example-mkdocs-basic/blob/main/README.md)<br>
Contents of this `README.md` are visible on GitHub only and **not** included on 
[the documentation index page](https://doc-tft-espi.readthedocs.io).

:interrobang:Questions / comments<br>
If you have questions related to this example, feel free to can ask them as a GitHub issue
[here](https://github.com/Marcussacapuces91/doc-TFT_eSPI/issues).

:handshake:Contributing<br>
You are encouraged to contribute to this documentation project. You can submit pull requests or report issues on the
GitHub repository.

## Example Project usage

This project has a standard MkDocs layout which is built by Read the Docs almost the same way that you would build it
locally (on your own laptop!).

You can build and view this documentation project locally - we recommend that you activate
[a local Python virtual environment first](https://packaging.python.org/en/latest/guides/installing-using-pip-and-virtual-environments/#creating-a-virtual-environment):

```console
# Install required Python dependencies (MkDocs etc.)
pip install -r docs/requirements.txt

# Run the mkdocs development server
mkdocs serve
```

## Read the Docs tutorial

To get started with Read the Docs, you may also refer to the
[Read the Docs tutorial](https://docs.readthedocs.io/en/stable/tutorial/). It provides a full walk-through of building
an example project similar to the one in this repository.

You can also find the [Project documentation with Markdown](https://mkdocs.readthedocs.io).

-----
:copyright: 2024 by Marc SIBERT<br/>
Some parts of the site are [`AI-powered outline courtesy of LLaMA`](https://labs.perplexity.ai/)
