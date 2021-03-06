//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>

@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>
{
    NSArray *_peopleNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000600e3
@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
- (void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000600bd
- (void)resetToDefault;	// IMP=0x000000000006002b
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headerTitle;
- (id)init;	// IMP=0x000000000005fdf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

