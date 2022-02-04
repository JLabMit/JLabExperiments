# Introduction

In this section we present a collection of tools for data analysis that are ready to use on the login pool of the physics department, [the subMIT system](http://submit04.mit.edu/). To login you can quickly create yourself an account by going to the [submit portal](https://submit-portal.mit.edu) and under the SSH keys tab upload your **public** ssh key. Checkout the detailed [users guide of submit](http://submit04.mit.edu/submit-users-guide/index.html).

Once you have completed this task you should be able to login to submit simply by using ssh:

    ssh <user-name>@submit.mit.edu

Make sure that you use the right user id when you login: it is the kerberos user id that you also use for touchstone authentication or for login into athena.

The recommended tools for JLab are python based, either directly from the [command line](python) or using [jupyter notebooks](jupyter). You can run those all from your own laptop once you have all necessary packages installed. If you do not want to go through that trouble you can run them immediately on submit. To install this github package just login and install:

    git clone https://github.com/JLabMit/JLabExperiments

There are also some examples for root afficionados, which uses a version of C++ as scripting language.

By default we split the data directories off to Introduction/dat and plots are kept in Introduction/png. This organizes the workspace but it not necessary.
