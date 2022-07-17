//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status
{
    NSArray *_statusInstalledApplicationList;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithInstalledApplicationList:(id)arg1;	// IMP=0x000000000001b968
+ (id)buildWithInstalledApplicationList:(id)arg1;	// IMP=0x000000000001b912
+ (id)allowedReasons;	// IMP=0x000000000001b86f
+ (id)allowedStatusKeys;	// IMP=0x000000000001b7cc
- (void).cxx_destruct;	// IMP=0x000000000001bcf1
@property(copy, nonatomic) NSArray *statusInstalledApplicationList; // @synthesize statusInstalledApplicationList=_statusInstalledApplicationList;
- (id)serializePayload;	// IMP=0x000000000001bc2e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b9be

@end
