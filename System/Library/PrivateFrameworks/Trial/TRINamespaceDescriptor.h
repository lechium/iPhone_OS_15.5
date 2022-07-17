//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL, TRIAppContainer;

@interface TRINamespaceDescriptor : NSObject
{
    _Bool _expensiveNetworkingAllowed;	// 8 = 0x8
    _Bool _enableFetchDuringSetupAssistant;	// 9 = 0x9
    unsigned int _downloadNCV;	// 12 = 0xc
    int _cloudKitContainerId;	// 16 = 0x10
    int _purgeabilityLevel;	// 20 = 0x14
    NSString *_namespaceName;	// 24 = 0x18
    NSURL *_factorsURL;	// 32 = 0x20
    TRIAppContainer *_appContainer;	// 40 = 0x28
    NSSet *_upgradeNCVs;	// 48 = 0x30
    NSString *_resourceAttributionIdentifier;	// 56 = 0x38
}

+ (void)enumerateDescriptorsInDirectory:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000004aeb7
+ (id)descriptorsForDirectory:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004acb6
+ (_Bool)removeDescriptorWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;	// IMP=0x000000000004ab1d
+ (id)loadWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;	// IMP=0x0000000000048ef5
+ (id)loadFromFile:(id)arg1;	// IMP=0x0000000000048d8d
+ (id)descriptorPathForNamespaceName:(id)arg1 fromDirectory:(id)arg2;	// IMP=0x000000000004887b
- (void).cxx_destruct;	// IMP=0x000000000004bb45
@property(readonly, nonatomic) int purgeabilityLevel; // @synthesize purgeabilityLevel=_purgeabilityLevel;
@property(readonly, nonatomic) _Bool enableFetchDuringSetupAssistant; // @synthesize enableFetchDuringSetupAssistant=_enableFetchDuringSetupAssistant;
@property(readonly, nonatomic) _Bool expensiveNetworkingAllowed; // @synthesize expensiveNetworkingAllowed=_expensiveNetworkingAllowed;
@property(readonly, nonatomic) NSString *resourceAttributionIdentifier; // @synthesize resourceAttributionIdentifier=_resourceAttributionIdentifier;
@property(readonly, nonatomic) int cloudKitContainerId; // @synthesize cloudKitContainerId=_cloudKitContainerId;
@property(readonly, nonatomic) NSSet *upgradeNCVs; // @synthesize upgradeNCVs=_upgradeNCVs;
@property(readonly, nonatomic) TRIAppContainer *appContainer; // @synthesize appContainer=_appContainer;
@property(readonly, nonatomic) NSURL *factorsURL; // @synthesize factorsURL=_factorsURL;
@property(readonly, nonatomic) unsigned int downloadNCV; // @synthesize downloadNCV=_downloadNCV;
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
- (unsigned long long)hash;	// IMP=0x000000000004b8ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b844
- (_Bool)_isEqualToNamespaceDescriptor:(id)arg1;	// IMP=0x000000000004b246
- (_Bool)_upgradeNCVsArePositiveIntegers:(id)arg1;	// IMP=0x000000000004a9cc
- (_Bool)_upgradeNCVsIsValid:(id)arg1;	// IMP=0x000000000004a94d
- (_Bool)removeFromDirectory:(id)arg1;	// IMP=0x000000000004a8cc
- (_Bool)saveToDirectory:(id)arg1;	// IMP=0x000000000004a7e9
- (_Bool)writeToFile:(id)arg1;	// IMP=0x000000000004a563
- (id)dictionary;	// IMP=0x000000000004a08e
- (id)factorsAbsolutePathAsOwner:(_Bool)arg1;	// IMP=0x0000000000049e32
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004929b
- (id)initWithNamespaceName:(id)arg1 downloadNCV:(unsigned int)arg2 optionalParams:(id)arg3;	// IMP=0x0000000000049092

@end
