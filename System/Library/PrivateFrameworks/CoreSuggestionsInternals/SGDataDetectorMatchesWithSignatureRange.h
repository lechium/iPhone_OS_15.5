//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGDataDetectorMatchesWithSignatureRange : NSObject
{
    NSArray *_matches;	// 8 = 0x8
    struct _NSRange _signatureRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b3d40
@property(nonatomic) struct _NSRange signatureRange; // @synthesize signatureRange=_signatureRange;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;

@end
