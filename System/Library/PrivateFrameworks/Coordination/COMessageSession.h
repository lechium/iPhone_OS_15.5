//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COClusterMember, NSString;

@interface COMessageSession : NSObject
{
    COClusterMember *_member;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000286f
@property(readonly, retain, nonatomic) COClusterMember *member; // @synthesize member=_member;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002763
- (unsigned long long)hash;	// IMP=0x00000000000026d6
@property(readonly, copy, nonatomic) NSString *subTopic;
- (id)messageChannel;	// IMP=0x00000000000025e2
- (void)stopWithNotice:(id)arg1;	// IMP=0x0000000000002574
- (id)initWithMember:(id)arg1;	// IMP=0x0000000000002509

@end
