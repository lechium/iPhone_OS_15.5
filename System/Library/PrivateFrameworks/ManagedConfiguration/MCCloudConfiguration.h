//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MCCloudConfiguration : NSObject
{
}

+ (id)sharedConfiguration;	// IMP=0x00000000000984f8
- (int)_MDMUserModeToMCUserMode:(int)arg1;	// IMP=0x0000000000098c60
- (id)skipSetupKeys;	// IMP=0x0000000000098c09
- (id)tvProviderUserToken;	// IMP=0x0000000000098bb2
- (id)provisionalEnrollmentExpirationDate;	// IMP=0x0000000000098b5b
- (_Bool)isProvisionallyEnrolled;	// IMP=0x0000000000098b10
- (id)languageScript;	// IMP=0x0000000000098ab9
- (id)region;	// IMP=0x0000000000098a62
- (id)language;	// IMP=0x0000000000098a0b
- (_Bool)alreadySignedIntoFaceTime;	// IMP=0x00000000000989c0
- (_Bool)hasMAIDCredential;	// IMP=0x0000000000098975
- (id)MAIDUsername;	// IMP=0x000000000009891e
- (id)diagnosticsUploadURL;	// IMP=0x00000000000988c7
- (int)userMode;	// IMP=0x0000000000098863
- (id)mdmVersionProtocol;	// IMP=0x000000000009880c
- (_Bool)isAwaitingConfiguration;	// IMP=0x00000000000987c1
- (_Bool)isTeslaEnrolled;	// IMP=0x0000000000098776
- (_Bool)isSupervised;	// IMP=0x000000000009872b
@property(copy, nonatomic) NSDictionary *setAsideDetails;
@property(copy, nonatomic) NSDictionary *details;
- (void)refreshDetailsFromDisk;	// IMP=0x000000000009854d

@end

