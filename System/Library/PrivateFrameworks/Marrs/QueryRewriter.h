//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface QueryRewriter : NSObject
{
    struct unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>> _plugin;	// 8 = 0x8
    NSString *_predictorName;	// 16 = 0x10
    int _predictorType;	// 24 = 0x18
    NSString *_locale;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000060c67
- (void).cxx_destruct;	// IMP=0x0000000000060c24
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (id)predictWithInput:(id)arg1 status:(id *)arg2;	// IMP=0x00000000000606fb
- (id)initWithLocale:(id)arg1 filesPath:(id)arg2 predictorType:(int)arg3 status:(id *)arg4;	// IMP=0x0000000000060142

@end
