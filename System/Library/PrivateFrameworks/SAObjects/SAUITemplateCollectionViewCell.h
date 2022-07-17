//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAUITemplateMonogrammable-Protocol.h>

@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell <SAUITemplateMonogrammable>
{
}

+ (id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003088c
+ (id)collectionViewCell;	// IMP=0x000000000003087a
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSArray *themeImages;
@property(copy, nonatomic) NSString *subtitleText;
@property(nonatomic) _Bool sizeToFitImage;
@property(copy, nonatomic) NSArray *monogramName;
- (id)encodedClassName;	// IMP=0x000000000003086d
- (id)groupIdentifier;	// IMP=0x0000000000030859

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
