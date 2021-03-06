//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>
#import <SafariShared/_SSURLCompletionMatch-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>
{
    _Bool _topHit;	// 8 = 0x8
    _Bool _synthesizedTopHit;	// 9 = 0x9
    _Bool _topHitDueToTriggerMatch;	// 10 = 0xa
    NSURL *_url;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_userVisibleURLString;	// 32 = 0x20
    long long _matchLocation;	// 40 = 0x28
    long long _visitCount;	// 48 = 0x30
    NSDate *_lastVisitTime;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001793e4
- (void).cxx_destruct;	// IMP=0x00000000001796cc
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(readonly, nonatomic, getter=isTopHitDueToTriggerMatch) _Bool topHitDueToTriggerMatch; // @synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch;
@property(readonly, nonatomic, getter=isSynthesizedTopHit) _Bool synthesizedTopHit; // @synthesize synthesizedTopHit=_synthesizedTopHit;
@property(readonly, nonatomic, getter=isTopHit) _Bool topHit; // @synthesize topHit=_topHit;
@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017957b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001793ec
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(_Bool)arg4 isSynthesizedTopHit:(_Bool)arg5 isTopHitDueToTriggerMatch:(_Bool)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8;	// IMP=0x00000000001791fd
- (id)init;	// IMP=0x00000000001791ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

