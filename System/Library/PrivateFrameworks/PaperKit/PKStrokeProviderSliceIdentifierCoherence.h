//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKStrokeProviderSliceIdentifier.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier
{
    MISSING_TYPE *inkTimestamp;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *transformTimestamp;	// 0 = 0x0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046d70
- (void).cxx_destruct;	// IMP=0x0000000000047090
- (id)init;	// IMP=0x0000000000047040
- (id)initWithUUID:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;	// IMP=0x0000000000046fe0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046fa0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046f50
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046930

@end

