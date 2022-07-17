//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableString, NSString, NSUUID;
@protocol CXActionDelegate;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    long long _failureReason;	// 24 = 0x18
    NSDate *_commitDate;	// 32 = 0x20
    id <CXActionDelegate> _delegate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004c3f
+ (double)timeout;	// IMP=0x000000000000482f
- (void).cxx_destruct;	// IMP=0x0000000000004fd3
@property(nonatomic) __weak id <CXActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *commitDate; // @synthesize commitDate=_commitDate;
@property(nonatomic) long long failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004dcf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004c47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004be3
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000004bd1
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004b71
- (id)sanitizedCopy;	// IMP=0x0000000000004b5d
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000004a55
- (void)updateAsFailedWithReason:(long long)arg1;	// IMP=0x0000000000004a13
- (void)updateAsFulfilled;	// IMP=0x00000000000049fc
- (void)fail;	// IMP=0x0000000000004985
- (void)fulfill;	// IMP=0x0000000000004913
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) NSDate *timeoutDate;
@property(readonly, copy, nonatomic) NSMutableString *customDescription;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000004610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
