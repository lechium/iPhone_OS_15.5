//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSDetectedCode, DDScannerResult, NSString, VNObservation;

@interface VNDataDetectorResult : NSObject
{
    DDScannerResult *_scannerResult;	// 8 = 0x8
    NSString *_shortDescription;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    VNObservation *_originalObservation;	// 40 = 0x28
    BCSDetectedCode *_detectedBarcodeSupportCode;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000021f333
@property(retain, nonatomic) BCSDetectedCode *detectedBarcodeSupportCode; // @synthesize detectedBarcodeSupportCode=_detectedBarcodeSupportCode;
@property(retain, nonatomic) VNObservation *originalObservation; // @synthesize originalObservation=_originalObservation;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(retain, nonatomic) DDScannerResult *scannerResult; // @synthesize scannerResult=_scannerResult;
- (id)debugDescription;	// IMP=0x000000000021f1e3
- (id)initWithBCSDetectedCode:(id)arg1 description:(id)arg2 observation:(id)arg3;	// IMP=0x000000000021f12c
- (id)initWithDDScannerResult:(id)arg1 observation:(id)arg2;	// IMP=0x000000000021f018

@end
