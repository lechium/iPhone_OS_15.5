//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ICPushNotificationMessage : NSObject
{
    NSDictionary *_userInfo;	// 8 = 0x8
    long long _accountDSID;	// 16 = 0x10
    long long _actionType;	// 24 = 0x18
    NSDictionary *_apsPayload;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000427ee
@property(readonly, copy, nonatomic) NSDictionary *apsPayload; // @synthesize apsPayload=_apsPayload;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) long long accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)initWithMessageUserInfo:(id)arg1;	// IMP=0x00000000000423b0
@property(readonly, copy, nonatomic) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property(readonly, nonatomic) long long sagaServerRevision;
@property(readonly, copy, nonatomic) NSArray *jaliscoChangedMediaTypes;
@property(readonly, nonatomic) long long jaliscoServerRevision;
@property(readonly, nonatomic) long long moduleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientIdentifier;

@end

