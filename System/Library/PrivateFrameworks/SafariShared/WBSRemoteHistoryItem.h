//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>
{
    NSURL *_url;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDate *_lastVisitTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001594f4
- (void).cxx_destruct;	// IMP=0x0000000000159695
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001595f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001594fc
- (id)description;	// IMP=0x0000000000159474
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;	// IMP=0x0000000000159392
- (id)init;	// IMP=0x0000000000159384

@end

