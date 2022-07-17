//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDataDetectorSupporting-Protocol.h>

@class CROutputRegion, NSArray, NSString;

@interface VNRecognizedTextBlockObservation <VNDataDetectorSupporting>
{
    CROutputRegion *_crOutputRegion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000220098
- (id)getDataDetectorResults:(id *)arg1;	// IMP=0x000000000021fd32
- (id)debugDescription;	// IMP=0x000000000021fc8d
- (id)getCROutputRegion;	// IMP=0x000000000021fc78
@property(readonly, nonatomic, getter=getLines) NSArray *lines;
@property(readonly, nonatomic, getter=getTranscript) NSString *transcript;
- (id)boundingBoxForRange:(struct _NSRange)arg1 error:(id *)arg2;	// IMP=0x000000000021f9bd
- (id)topCandidates:(unsigned long long)arg1;	// IMP=0x000000000021f73c
@property(readonly, nonatomic, getter=getChildren) NSArray *children;
- (id)initWithRequestRevision:(unsigned long long)arg1 crOutputRegion:(id)arg2;	// IMP=0x000000000021f37c

@end
