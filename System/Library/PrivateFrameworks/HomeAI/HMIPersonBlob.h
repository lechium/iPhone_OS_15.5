//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIFaceprint, HMITorsoprint, NSMutableIndexSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMIPersonBlob : HMFObject
{
    HMIFaceprint *_faceprint;	// 8 = 0x8
    HMITorsoprint *_torsoprint;	// 16 = 0x10
    NSMutableIndexSet *_personIndices;	// 24 = 0x18
    NSUUID *_blobID;	// 32 = 0x20
    CDStruct_1b6d18a9 _timeStamp;	// 40 = 0x28
    struct CGRect _boundingBox;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000034746
@property(retain) NSUUID *blobID; // @synthesize blobID=_blobID;
@property(retain) NSMutableIndexSet *personIndices; // @synthesize personIndices=_personIndices;
@property(readonly) HMITorsoprint *torsoprint; // @synthesize torsoprint=_torsoprint;
@property(readonly) HMIFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly) CDStruct_1b6d18a9 timeStamp; // @synthesize timeStamp=_timeStamp;
- (_Bool)isExpiredAtTimeStamp:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000345fe
- (float)similarityToPersonBlob:(id)arg1;	// IMP=0x0000000000033f09
- (void)trackPersonBlob:(id)arg1;	// IMP=0x0000000000033eba
- (id)initWithNewPersonEvent:(id)arg1 timeStamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000033b7f

@end
