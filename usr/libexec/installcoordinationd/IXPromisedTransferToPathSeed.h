//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface IXPromisedTransferToPathSeed
{
    _Bool _shouldCopy;	// 8 = 0x8
    _Bool _tryDeltaCopy;	// 9 = 0x9
    NSURL *_transferPath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000033952
- (void).cxx_destruct;	// IMP=0x0020000000033a74
@property(nonatomic) _Bool tryDeltaCopy; // @synthesize tryDeltaCopy=_tryDeltaCopy;
@property(nonatomic) _Bool shouldCopy; // @synthesize shouldCopy=_shouldCopy;
@property(retain, nonatomic) NSURL *transferPath; // @synthesize transferPath=_transferPath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003395a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003386c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000033786

@end
