//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSArray, NSDate, NSString, SSEnvironmentDescriptionAppleInternalOptions, SSImageSurface, SSUIServiceOptions;

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding>
{
    NSArray *_elements;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_sessionIdentifier;	// 24 = 0x18
    unsigned long long _presentationMode;	// 32 = 0x20
    _Bool _canAutosaveToFiles;	// 40 = 0x28
    _Bool _skipShutterSound;	// 41 = 0x29
    unsigned int _externalFlashLayerContextID;	// 44 = 0x2c
    SSImageSurface *_imageSurface;	// 48 = 0x30
    double _imageScale;	// 56 = 0x38
    SSUIServiceOptions *_serviceOptions;	// 64 = 0x40
    NSDate *_date;	// 72 = 0x48
    unsigned long long _externalFlashLayerRenderID;	// 80 = 0x50
    SSEnvironmentDescriptionAppleInternalOptions *_appleInternalOptions;	// 88 = 0x58
    NSString *_betaApplicationBundleID;	// 96 = 0x60
    NSString *_betaApplicationName;	// 104 = 0x68
    struct CGSize _imagePixelSize;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011968
- (void).cxx_destruct;	// IMP=0x000000000001282c
@property(nonatomic) _Bool skipShutterSound; // @synthesize skipShutterSound=_skipShutterSound;
@property(nonatomic) _Bool canAutosaveToFiles; // @synthesize canAutosaveToFiles=_canAutosaveToFiles;
@property(copy, nonatomic) NSString *betaApplicationName; // @synthesize betaApplicationName=_betaApplicationName;
@property(copy, nonatomic) NSString *betaApplicationBundleID; // @synthesize betaApplicationBundleID=_betaApplicationBundleID;
@property(retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions; // @synthesize appleInternalOptions=_appleInternalOptions;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) unsigned int externalFlashLayerContextID; // @synthesize externalFlashLayerContextID=_externalFlashLayerContextID;
@property(nonatomic) unsigned long long externalFlashLayerRenderID; // @synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) SSUIServiceOptions *serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGSize imagePixelSize; // @synthesize imagePixelSize=_imagePixelSize;
@property(retain, nonatomic) SSImageSurface *imageSurface; // @synthesize imageSurface=_imageSurface;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) BSSettings *bsSettings;
@property(readonly, nonatomic) struct CGSize imagePointSize;
@property(readonly, nonatomic) NSString *loggableDescription;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000011d7e
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000011970
- (void)setDebugElements:(id)arg1;	// IMP=0x0000000000011957
- (void)takeElementsFromDisplayLayout:(id)arg1;	// IMP=0x0000000000011767
- (id)init;	// IMP=0x0000000000011622

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
