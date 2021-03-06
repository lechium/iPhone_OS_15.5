//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TDTemplateRenderingMode, TDThemeBitSource;

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;	// 8 = 0x8
}

+ (long long)subtypeFromImageFilename:(id)arg1;	// IMP=0x0000000000009c31
+ (long long)idiomFromImageFilename:(id)arg1;	// IMP=0x0000000000009a7a
+ (_Bool)isTemplateFromImageFilename:(id)arg1;	// IMP=0x00000000000099d6
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;	// IMP=0x00000000000098e0
+ (id)_filenameRegex;	// IMP=0x000000000000978a
@property(readonly, nonatomic) NSString *baseName;
- (void)setHasProduction:(id)arg1;	// IMP=0x0000000000009784
- (_Bool)hasProduction;	// IMP=0x000000000000976e
- (id)fileURLWithDocument:(id)arg1;	// IMP=0x00000000000096c3
- (id)sourceRelativePath;	// IMP=0x0000000000009648
- (id)_sourceRelativePathComponents;	// IMP=0x00000000000095da
- (unsigned int)scaleFactor;	// IMP=0x000000000000958a
- (void)setScaleFactor:(unsigned int)arg1;	// IMP=0x0000000000009539

// Remaining properties
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TDThemeBitSource *source; // @dynamic source;
@property(retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

@end

