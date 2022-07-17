//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MDM/MDMAppItemsDataSource-Protocol.h>

@class DMFConnection, DMFFetchAppsRequest, DMFFetchAppsResultObject, NSArray, NSDictionary, NSSet, NSString;

@interface MDMAppPropertyShim : NSObject <MDMAppItemsDataSource>
{
    _Bool _shouldReturnManagedAppsOnly;	// 8 = 0x8
    NSSet *_appsRequested;	// 16 = 0x10
    NSSet *_itemsRequested;	// 24 = 0x18
    NSDictionary *_appItems;	// 32 = 0x20
    DMFConnection *_deviceManagementUserConnection;	// 40 = 0x28
    DMFFetchAppsRequest *_request;	// 48 = 0x30
    NSArray *_keysForRequest;	// 56 = 0x38
    DMFFetchAppsResultObject *_response;	// 64 = 0x40
}

+ (id)_dmdKeysToRequestToGetItems:(id)arg1;	// IMP=0x0000000000024607
+ (id)_itemKeyToDMDKeyMappingTable;	// IMP=0x0000000000024440
- (void).cxx_destruct;	// IMP=0x0000000000025112
@property(retain, nonatomic) DMFFetchAppsResultObject *response; // @synthesize response=_response;
@property(copy, nonatomic) NSArray *keysForRequest; // @synthesize keysForRequest=_keysForRequest;
@property(retain, nonatomic) DMFFetchAppsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) DMFConnection *deviceManagementUserConnection; // @synthesize deviceManagementUserConnection=_deviceManagementUserConnection;
@property(copy, nonatomic) NSDictionary *appItems; // @synthesize appItems=_appItems;
@property(copy, nonatomic) NSSet *itemsRequested; // @synthesize itemsRequested=_itemsRequested;
@property(nonatomic) _Bool shouldReturnManagedAppsOnly; // @synthesize shouldReturnManagedAppsOnly=_shouldReturnManagedAppsOnly;
@property(copy, nonatomic) NSSet *appsRequested; // @synthesize appsRequested=_appsRequested;
- (id)_appDictionaryFromApp:(id)arg1;	// IMP=0x000000000002484a
- (void)_createAppItems;	// IMP=0x000000000002419f
- (void)_executeRequest;	// IMP=0x0000000000023ff6
- (void)_createKeysForRequest;	// IMP=0x0000000000023f70
- (void)_createRequest;	// IMP=0x0000000000023e45
- (void)fetchAppItems;	// IMP=0x0000000000023e0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
