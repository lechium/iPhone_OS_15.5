//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface APSafeFileURL : NSURL
{
    NSString *_safeDescription;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000257b8
@property(copy, nonatomic) NSString *safeDescription; // @synthesize safeDescription=_safeDescription;
- (id)description;	// IMP=0x001000000002570e
- (id)URLByAppendingPathComponent:(id)arg1;	// IMP=0x0010000000025657
- (id)initWithString:(id)arg1;	// IMP=0x0010000000025628
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00100000000255ad

@end

