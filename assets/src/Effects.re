let saveTokenToStorage = value => Dom.Storage.(localStorage |> setItem("jwt", value));

let getTokenFromStorge = () => Dom.Storage.(localStorage |> getItem("jwt"));