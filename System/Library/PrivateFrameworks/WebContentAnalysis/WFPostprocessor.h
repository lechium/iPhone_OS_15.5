//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject
{
}

+ (id)adultWebSiteTagging:(id)arg1;	// IMP=0x0000000000005608
+ (id)normalizeStrippedHTML:(id)arg1;	// IMP=0x0000000000005594
+ (id)lightweightStripHTMLTags:(id)arg1;	// IMP=0x00000000000054c3
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;	// IMP=0x000000000000538d
+ (id)postprocessPlainTextWebPage:(id)arg1;	// IMP=0x000000000000531c
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;	// IMP=0x000000000000526f

@end

