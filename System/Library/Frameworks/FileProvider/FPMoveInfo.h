//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPActionOperationLocator, NSArray;

@interface FPMoveInfo <NSSecureCoding>
{
    _Bool _shouldBounce;	// 8 = 0x8
    _Bool _byCopy;	// 9 = 0x9
    FPActionOperationLocator *_targetFolder;	// 16 = 0x10
    NSArray *_rootFilenames;	// 24 = 0x18
    unsigned long long _lastUsedDatePolicy;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f7d87
- (void).cxx_destruct;	// IMP=0x00000000000f8276
@property(nonatomic) _Bool byCopy; // @synthesize byCopy=_byCopy;
@property(nonatomic) _Bool shouldBounce; // @synthesize shouldBounce=_shouldBounce;
@property(nonatomic) unsigned long long lastUsedDatePolicy; // @synthesize lastUsedDatePolicy=_lastUsedDatePolicy;
@property(retain, nonatomic) NSArray *rootFilenames; // @synthesize rootFilenames=_rootFilenames;
@property(retain, nonatomic) FPActionOperationLocator *targetFolder; // @synthesize targetFolder=_targetFolder;
@property(readonly, nonatomic) _Bool byMoving;
- (id)description;	// IMP=0x00000000000f803f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f7eb3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7d8f
- (id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(_Bool)arg6 byCopy:(_Bool)arg7;	// IMP=0x00000000000f7caa

@end
