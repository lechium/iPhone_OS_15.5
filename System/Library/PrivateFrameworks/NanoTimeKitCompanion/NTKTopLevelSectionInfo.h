//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationSectionInfo-Protocol.h>

@class NSString;

@interface NTKTopLevelSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>
{
    NSString *_ntk_identifier;	// 8 = 0x8
    NSString *_ntk_localizedSectionName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d2b60
@property(copy, nonatomic) NSString *ntk_localizedSectionName; // @synthesize ntk_localizedSectionName=_ntk_localizedSectionName;
@property(copy, nonatomic) NSString *ntk_identifier; // @synthesize ntk_identifier=_ntk_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d2b23
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d2aae
- (id)initWithIdentifier:(id)arg1 localizedSectionName:(id)arg2;	// IMP=0x00000000001d2a15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

