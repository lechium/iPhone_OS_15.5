//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProtectedCloudStorage/NSSecureCoding-Protocol.h>

@class NSDate, NSString, PCSMTT;

@interface PCSMTTPoint : NSObject <NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _time;	// 24 = 0x18
    PCSMTT *_mtt;	// 32 = 0x20
    NSDate *_start;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034b05
- (void).cxx_destruct;	// IMP=0x00000000000350a0
@property(retain) NSDate *start; // @synthesize start=_start;
@property __weak PCSMTT *mtt; // @synthesize mtt=_mtt;
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) double time; // @synthesize time=_time;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034ee4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034e08
- (void)complete:(_Bool)arg1 time:(double)arg2;	// IMP=0x0000000000034dca
- (void)complete:(_Bool)arg1;	// IMP=0x0000000000034d50
- (id)jsonDict;	// IMP=0x0000000000034c0f
- (id)description;	// IMP=0x0000000000034bd8
- (id)initWithMTT:(id)arg1 name:(id)arg2;	// IMP=0x0000000000034b0d

@end

