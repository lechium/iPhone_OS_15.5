//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AMSEngagementSyncResult : NSObject <NSSecureCoding>
{
    NSArray *_actions;	// 8 = 0x8
}

+ (id)archiveClasses;	// IMP=0x0000000000129c3c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000129c34
- (void).cxx_destruct;	// IMP=0x0000000000129d1b
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000129b7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000129b04

@end
