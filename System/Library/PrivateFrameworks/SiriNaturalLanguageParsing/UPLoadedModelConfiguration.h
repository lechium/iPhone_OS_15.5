//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSString, UPPreprocessor;

@interface UPLoadedModelConfiguration : NSObject
{
    _Bool _isPLUMEnabled;	// 8 = 0x8
    UPPreprocessor *_preprocessor;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    NSLocale *_locale;	// 32 = 0x20
    NSString *_bioLabelsVocabPath;	// 40 = 0x28
    NSString *_intentVocabPath;	// 48 = 0x30
    void *_labelToValueType;	// 56 = 0x38
    void *_resolver;	// 64 = 0x40
    void *_beamMaskInput;	// 72 = 0x48
    struct EspressoModule *_parserEspressoModule;	// 80 = 0x50
    struct EspressoModule *_calibrationEspressoModule;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000095ea7
@property(readonly, nonatomic) struct EspressoModule *calibrationEspressoModule; // @synthesize calibrationEspressoModule=_calibrationEspressoModule;
@property(readonly, nonatomic) struct EspressoModule *parserEspressoModule; // @synthesize parserEspressoModule=_parserEspressoModule;
@property(readonly, nonatomic) void *beamMaskInput; // @synthesize beamMaskInput=_beamMaskInput;
@property(readonly, nonatomic) void *resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) void *labelToValueType; // @synthesize labelToValueType=_labelToValueType;
@property(readonly, nonatomic) NSString *intentVocabPath; // @synthesize intentVocabPath=_intentVocabPath;
@property(readonly, nonatomic) NSString *bioLabelsVocabPath; // @synthesize bioLabelsVocabPath=_bioLabelsVocabPath;
@property(readonly) _Bool isPLUMEnabled; // @synthesize isPLUMEnabled=_isPLUMEnabled;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) UPPreprocessor *preprocessor; // @synthesize preprocessor=_preprocessor;
- (void)dealloc;	// IMP=0x0000000000095d59
@property(readonly) _Bool hasCalibrationModel;
- (id)initWithModelConfiguration:(id)arg1;	// IMP=0x0000000000094842

@end

