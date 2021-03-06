//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXTextStyleFontDescribing-Protocol.h>

@class NSString;
@protocol SXTextStyleFontAttributes;

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing>
{
    id <SXTextStyleFontAttributes> _fontAttributes;	// 8 = 0x8
    NSString *_fontName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007c9fd
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) id <SXTextStyleFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
- (id)init;	// IMP=0x000000000007c979

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

