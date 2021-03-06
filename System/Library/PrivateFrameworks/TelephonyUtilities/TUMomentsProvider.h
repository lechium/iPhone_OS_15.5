//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TUMomentsProvider : NSObject
{
    _Bool _remoteMomentsAvailable;	// 8 = 0x8
    long long _streamToken;	// 16 = 0x10
    NSString *_requesterID;	// 24 = 0x18
    NSDictionary *_remoteIDSDestinations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e601f
@property(readonly, nonatomic, getter=isRemoteMomentsAvailable) _Bool remoteMomentsAvailable; // @synthesize remoteMomentsAvailable=_remoteMomentsAvailable;
@property(readonly, copy, nonatomic) NSDictionary *remoteIDSDestinations; // @synthesize remoteIDSDestinations=_remoteIDSDestinations;
@property(readonly, copy, nonatomic) NSString *requesterID; // @synthesize requesterID=_requesterID;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (id)description;	// IMP=0x00000000000e5ee9
- (_Bool)isEqualToProvider:(id)arg1;	// IMP=0x00000000000e5d71
- (id)initWithConversation:(id)arg1;	// IMP=0x00000000000e5964
- (id)initWithCall:(id)arg1;	// IMP=0x00000000000e57db

@end

