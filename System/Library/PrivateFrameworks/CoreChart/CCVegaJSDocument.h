//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaJSDocumentInterface-Protocol.h>

@class CCVegaHTMLElement, CCVegaRenderer;

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface>
{
    CCVegaRenderer *renderer;	// 8 = 0x8
    CCVegaHTMLElement *body;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000027112
@property(retain, nonatomic) CCVegaHTMLElement *body; // @synthesize body;
@property(nonatomic) __weak CCVegaRenderer *renderer; // @synthesize renderer;
- (id)createElementWithString:(id)arg1;	// IMP=0x0000000000026fec
- (id)init;	// IMP=0x0000000000026f81

@end
