//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPBaseScoreInputSet : NSObject
{
    _PASLock *_scalarMap;	// 8 = 0x8
    _PASLock *_arrayMap;	// 16 = 0x10
    _PASLock *_objectMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b3537
- (unsigned long long)indexForObjectScoreName:(id)arg1;	// IMP=0x00000000000b3403
- (id)nameForObjectScoreIndex:(unsigned long long)arg1;	// IMP=0x00000000000b33fd
- (unsigned long long)undefinedObjectScoreIndex;	// IMP=0x00000000000b33f7
- (unsigned long long)objectScoreIndexUpperBound;	// IMP=0x00000000000b33f1
- (unsigned long long)minObjectScoreIndex;	// IMP=0x00000000000b33eb
- (unsigned long long)indexForArrayScoreName:(id)arg1;	// IMP=0x00000000000b32b7
- (id)nameForArrayScoreIndex:(unsigned long long)arg1;	// IMP=0x00000000000b32b1
- (unsigned long long)undefinedArrayScoreIndex;	// IMP=0x00000000000b32ab
- (unsigned long long)arrayScoreIndexUpperBound;	// IMP=0x00000000000b32a5
- (unsigned long long)minArrayScoreIndex;	// IMP=0x00000000000b329f
- (unsigned long long)indexForScalarScoreName:(id)arg1;	// IMP=0x00000000000b316b
- (id)nameForScalarScoreIndex:(unsigned long long)arg1;	// IMP=0x00000000000b3165
- (unsigned long long)undefinedScalarScoreIndex;	// IMP=0x00000000000b315f
- (unsigned long long)scalarScoreIndexUpperBound;	// IMP=0x00000000000b3159
- (unsigned long long)minScalarScoreIndex;	// IMP=0x00000000000b3153
- (id)init;	// IMP=0x00000000000b3038

@end
