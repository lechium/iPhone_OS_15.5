//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPPropertyConverter : NSObject
{
}

+ (id)newFontWithFeaturesFromFont:(id)arg1 primaryStyle:(id)arg2 secondaryStyle:(id)arg3 ligatures:(int)arg4;	// IMP=0x000000000030b274
+ (void)mapFontFeaturesFromStyle:(id)arg1 secondaryStyle:(id)arg2 toNS:(id)arg3 ioFont:(id *)arg4 ligatures:(int)arg5;	// IMP=0x000000000030b26e
+ (void)mapCharacterPropertiesFromStyle:(id)arg1 secondaryStyle:(id)arg2 toNS:(id)arg3 stickyFont:(id *)arg4 scale:(double)arg5;	// IMP=0x000000000030ad2b
+ (void)mapCharacterPropertiesFromStyle:(id)arg1 toNS:(id)arg2 stickyFont:(id *)arg3 scale:(double)arg4;	// IMP=0x000000000030ad07
+ (id)propertyMapToDictionary:(id)arg1;	// IMP=0x000000000030aa4c
+ (void)mapCharacterPropertiesFromStyles:(id *)arg1 styleCount:(unsigned int)arg2 toNS:(id)arg3 stickyFont:(id *)arg4 scale:(double)arg5;	// IMP=0x000000000030a925
+ (id)mapCharacterPropertiesFromNS:(id)arg1;	// IMP=0x000000000030a8d8
+ (void)mapCharacterPropertiesFromNS:(id)arg1 toWP:(id)arg2;	// IMP=0x000000000030a44f
+ (void)initialize;	// IMP=0x000000000030a358

@end

