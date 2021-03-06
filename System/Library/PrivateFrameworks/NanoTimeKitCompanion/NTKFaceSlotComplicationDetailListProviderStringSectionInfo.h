//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationSectionInfo-Protocol.h>

@class NSString;

@interface NTKFaceSlotComplicationDetailListProviderStringSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>
{
    NSString *_groupName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007d01d
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007d008
@property(readonly, copy, nonatomic) NSString *ntk_localizedSectionName;
@property(readonly, copy, nonatomic) NSString *ntk_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007cf32
@property(readonly) unsigned long long hash;
- (id)initWithGroupName:(id)arg1;	// IMP=0x000000000007ce8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

