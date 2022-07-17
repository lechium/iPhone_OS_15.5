//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSFaceInformation : NSObject
{
    unsigned int _faceSizeIsGood:1;	// 8 = 0x8
    unsigned int _faceIsGood:1;	// 8 = 0x8
    unsigned int _faceIsOk:1;	// 8 = 0x8
    _Bool _isKnownPerson;	// 9 = 0x9
    _Bool _isHiddenPerson;	// 10 = 0xa
    double _faceSize;	// 16 = 0x10
    double _faceQuality;	// 24 = 0x18
    NSArray *_traits;	// 32 = 0x20
}

+ (id)_traitsFromTraitsPropertyListRepresentation:(id)arg1;	// IMP=0x0000000000037141
- (void).cxx_destruct;	// IMP=0x00000000000370de
@property(readonly) NSArray *traits; // @synthesize traits=_traits;
@property(readonly) _Bool faceIsOk; // @synthesize faceIsOk=_faceIsOk;
@property(readonly) _Bool faceIsGood; // @synthesize faceIsGood=_faceIsGood;
@property(readonly) _Bool faceSizeIsGood; // @synthesize faceSizeIsGood=_faceSizeIsGood;
@property(readonly) _Bool isHiddenPerson; // @synthesize isHiddenPerson=_isHiddenPerson;
@property(readonly) _Bool isKnownPerson; // @synthesize isKnownPerson=_isKnownPerson;
@property(readonly) double faceQuality; // @synthesize faceQuality=_faceQuality;
@property(readonly) double faceSize; // @synthesize faceSize=_faceSize;
- (id)_propertyListRepresentationOfTraits;	// IMP=0x0000000000036fc3
- (id)dictionaryRepresentation;	// IMP=0x0000000000036d4d
- (id)description;	// IMP=0x0000000000036d1e
- (id)_initWithFaceSize:(double)arg1 faceQuality:(double)arg2 isKnownPerson:(_Bool)arg3 isHiddenPerson:(_Bool)arg4 faceSizeIsGood:(_Bool)arg5 faceIsGood:(_Bool)arg6 faceIsOk:(_Bool)arg7 traits:(id)arg8;	// IMP=0x0000000000036c5c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000036a26
- (id)initForUnknownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(_Bool)arg3 faceIsGood:(_Bool)arg4 faceIsOk:(_Bool)arg5 traits:(id)arg6;	// IMP=0x00000000000369fc
- (id)initForHiddenPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(_Bool)arg3 faceIsGood:(_Bool)arg4 faceIsOk:(_Bool)arg5 traits:(id)arg6;	// IMP=0x00000000000369cf
- (id)initForKnownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(_Bool)arg3 faceIsGood:(_Bool)arg4 faceIsOk:(_Bool)arg5 traits:(id)arg6;	// IMP=0x00000000000369a2

@end
