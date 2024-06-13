# \DefaultAPI

All URIs are relative to *https://example.com/nchf-offlineonlycharging/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OfflinechargingdataOfflineChargingDataRefReleasePost**](DefaultAPI.md#OfflinechargingdataOfflineChargingDataRefReleasePost) | **Post** /offlinechargingdata/{OfflineChargingDataRef}/release | 
[**OfflinechargingdataOfflineChargingDataRefUpdatePost**](DefaultAPI.md#OfflinechargingdataOfflineChargingDataRefUpdatePost) | **Post** /offlinechargingdata/{OfflineChargingDataRef}/update | 
[**OfflinechargingdataPost**](DefaultAPI.md#OfflinechargingdataPost) | **Post** /offlinechargingdata | 



## OfflinechargingdataOfflineChargingDataRefReleasePost

> OfflinechargingdataOfflineChargingDataRefReleasePost(ctx, offlineChargingDataRef).ChargingDataRequest(chargingDataRequest).Execute()



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	offlineChargingDataRef := "offlineChargingDataRef_example" // string | a unique identifier for a charging data resource in a PLMN
	chargingDataRequest := *openapiclient.NewChargingDataRequest(*openapiclient.NewNFIdentification(*openapiclient.NewNodeFunctionality()), time.Now(), int32(123)) // ChargingDataRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.DefaultAPI.OfflinechargingdataOfflineChargingDataRefReleasePost(context.Background(), offlineChargingDataRef).ChargingDataRequest(chargingDataRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DefaultAPI.OfflinechargingdataOfflineChargingDataRefReleasePost``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**offlineChargingDataRef** | **string** | a unique identifier for a charging data resource in a PLMN | 

### Other Parameters

Other parameters are passed through a pointer to a apiOfflinechargingdataOfflineChargingDataRefReleasePostRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **chargingDataRequest** | [**ChargingDataRequest**](ChargingDataRequest.md) |  | 

### Return type

 (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OfflinechargingdataOfflineChargingDataRefUpdatePost

> ChargingDataResponse OfflinechargingdataOfflineChargingDataRefUpdatePost(ctx, offlineChargingDataRef).ChargingDataRequest(chargingDataRequest).Execute()



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	offlineChargingDataRef := "offlineChargingDataRef_example" // string | a unique identifier for a charging data resource in a PLMN
	chargingDataRequest := *openapiclient.NewChargingDataRequest(*openapiclient.NewNFIdentification(*openapiclient.NewNodeFunctionality()), time.Now(), int32(123)) // ChargingDataRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DefaultAPI.OfflinechargingdataOfflineChargingDataRefUpdatePost(context.Background(), offlineChargingDataRef).ChargingDataRequest(chargingDataRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DefaultAPI.OfflinechargingdataOfflineChargingDataRefUpdatePost``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `OfflinechargingdataOfflineChargingDataRefUpdatePost`: ChargingDataResponse
	fmt.Fprintf(os.Stdout, "Response from `DefaultAPI.OfflinechargingdataOfflineChargingDataRefUpdatePost`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**offlineChargingDataRef** | **string** | a unique identifier for a charging data resource in a PLMN | 

### Other Parameters

Other parameters are passed through a pointer to a apiOfflinechargingdataOfflineChargingDataRefUpdatePostRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **chargingDataRequest** | [**ChargingDataRequest**](ChargingDataRequest.md) |  | 

### Return type

[**ChargingDataResponse**](ChargingDataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OfflinechargingdataPost

> ChargingDataResponse OfflinechargingdataPost(ctx).ChargingDataRequest(chargingDataRequest).Execute()



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	chargingDataRequest := *openapiclient.NewChargingDataRequest(*openapiclient.NewNFIdentification(*openapiclient.NewNodeFunctionality()), time.Now(), int32(123)) // ChargingDataRequest | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.DefaultAPI.OfflinechargingdataPost(context.Background()).ChargingDataRequest(chargingDataRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `DefaultAPI.OfflinechargingdataPost``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `OfflinechargingdataPost`: ChargingDataResponse
	fmt.Fprintf(os.Stdout, "Response from `DefaultAPI.OfflinechargingdataPost`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiOfflinechargingdataPostRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chargingDataRequest** | [**ChargingDataRequest**](ChargingDataRequest.md) |  | 

### Return type

[**ChargingDataResponse**](ChargingDataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

