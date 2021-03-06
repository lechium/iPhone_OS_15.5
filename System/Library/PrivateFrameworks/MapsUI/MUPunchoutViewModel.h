//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUPunchoutViewModel : NSObject
{
    NSString *_symbolName;	// 8 = 0x8
    NSString *_punchoutText;	// 16 = 0x10
}

+ (id)viewModelForFullScreenGallery;	// IMP=0x0000000000029ac5
+ (id)viewModelForAddPhotos;	// IMP=0x0000000000029a4f
+ (id)viewModelForVendorName:(id)arg1;	// IMP=0x0000000000029986
- (void).cxx_destruct;	// IMP=0x0000000000029b71
@property(retain, nonatomic) NSString *punchoutText; // @synthesize punchoutText=_punchoutText;
@property(retain, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;

@end

