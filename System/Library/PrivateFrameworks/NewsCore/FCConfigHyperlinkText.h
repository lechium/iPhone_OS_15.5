//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCConfigHyperlinkText : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSArray *_links;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a94e9
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 links:(id)arg2;	// IMP=0x00000000002a943c
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x00000000002a931b

@end

