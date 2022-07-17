//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext
{
    NSURL *_physicalCardImageURL;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    unsigned long long _ingestionState;	// 64 = 0x40
    double _ingestionProgress;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ad6f6
- (void).cxx_destruct;	// IMP=0x00000000000adada
@property(nonatomic) double ingestionProgress; // @synthesize ingestionProgress=_ingestionProgress;
@property(nonatomic) unsigned long long ingestionState; // @synthesize ingestionState=_ingestionState;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *physicalCardImageURL; // @synthesize physicalCardImageURL=_physicalCardImageURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ad946
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad818
- (id)description;	// IMP=0x00000000000ad72d
- (id)initWithRequestContext:(id)arg1;	// IMP=0x00000000000ad6fe

@end
