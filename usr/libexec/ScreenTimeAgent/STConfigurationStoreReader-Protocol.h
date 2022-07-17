//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, STConfigurationChange, STResult, STUserID;
@protocol STFamilyProviding;

@protocol STConfigurationStoreReader
- (NSDictionary *)communicationConfigurationOfChildrenByUserIDForTargetableFamilyMembers:(NSSet *)arg1;
- (STResult *)readCommunicationConfigurationForUserID:(STUserID *)arg1;
- (STResult *)readCommunicationConfigurationForLocalUser;
- (STResult *)readSetupConfigurationForUserID:(STUserID *)arg1 familyProvider:(id <STFamilyProviding>)arg2;
- (STResult *)readConfigurationChangesOfType:(long long)arg1 userID:(STUserID *)arg2;
- (STResult *)readConfigurationRelatedToConfiguration:(STConfigurationChange *)arg1;
@end
