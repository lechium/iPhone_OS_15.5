//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHChart : NSObject
{
}

+ (int)handleInlineChart:(id)arg1 state:(id)arg2;	// IMP=0x0000000000048bc1
+ (int)handleFloatingChart:(id)arg1 state:(id)arg2;	// IMP=0x0000000000048a8b
+ (id)geometry:(id)arg1;	// IMP=0x0000000000048a76
+ (char *)pdfId:(id)arg1;	// IMP=0x0000000000048a61
+ (int)handleInlineChart:(id)arg1 state:(id)arg2 imageUrl:(struct __CFString *)arg3;	// IMP=0x0000000000048cb1
+ (struct __CFString *)createChartImageUrlString:(id)arg1 state:(id)arg2;	// IMP=0x0000000000048be3
+ (struct __CFData *)renderChart:(id)arg1;	// IMP=0x0000000000048bd6

@end

