//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MADVIMachineReadableCodeDetectionRequest
{
    NSArray *_symbologies;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003162
- (void).cxx_destruct;	// IMP=0x00000000000034eb
@property(readonly, nonatomic) NSArray *symbologies; // @synthesize symbologies=_symbologies;
- (id)description;	// IMP=0x00000000000033c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003347
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000031fd
- (id)initWithSymbologies:(id)arg1;	// IMP=0x0000000000003183
- (id)init;	// IMP=0x000000000000316a

@end
