//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKPlayer, NSString;

@interface GKFriendRequestURLModel : NSObject
{
    NSString *_friendSupportPageURL;	// 8 = 0x8
    NSString *_friendCode;	// 16 = 0x10
    NSString *_friendRequestState;	// 24 = 0x18
    GKPlayer *_initiator;	// 32 = 0x20
    NSString *_friendRequestVersion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008d6e1
@property(retain, nonatomic) NSString *friendRequestVersion; // @synthesize friendRequestVersion=_friendRequestVersion;
@property(retain, nonatomic) GKPlayer *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSString *friendRequestState; // @synthesize friendRequestState=_friendRequestState;
@property(retain, nonatomic) NSString *friendCode; // @synthesize friendCode=_friendCode;
@property(retain, nonatomic) NSString *friendSupportPageURL; // @synthesize friendSupportPageURL=_friendSupportPageURL;
- (id)description;	// IMP=0x000000000008d533

@end
