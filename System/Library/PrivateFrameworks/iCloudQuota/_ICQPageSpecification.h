//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICQPageSpecification : NSObject
{
    _Bool _hasCancelButtonForBack;	// 8 = 0x8
    NSString *_pageIdentifier;	// 16 = 0x10
    NSString *_pageTitle;	// 24 = 0x18
    NSString *_pageClassIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026bd3
@property(retain, nonatomic) NSString *pageClassIdentifier; // @synthesize pageClassIdentifier=_pageClassIdentifier;
@property(nonatomic) _Bool hasCancelButtonForBack; // @synthesize hasCancelButtonForBack=_hasCancelButtonForBack;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (id)copyWithBindings:(id)arg1;	// IMP=0x0000000000026b1d
- (id)debugDescription;	// IMP=0x00000000000269cf

@end

