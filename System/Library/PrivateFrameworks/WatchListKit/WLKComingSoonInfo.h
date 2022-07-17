//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKComingSoonInfo : NSObject
{
    _Bool _comingSoon;	// 8 = 0x8
    NSString *_dateString;	// 16 = 0x10
    NSString *_dateFormat;	// 24 = 0x18
    unsigned long long _precision;	// 32 = 0x20
    NSString *_brandID;	// 40 = 0x28
}

+ (id)comingSoonItemsWithDictionaries:(id)arg1;	// IMP=0x0000000000022dca
- (void).cxx_destruct;	// IMP=0x000000000002379b
@property(readonly, copy, nonatomic) NSString *brandID; // @synthesize brandID=_brandID;
@property(readonly, nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(readonly, copy, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(readonly, copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, nonatomic, getter=isComingSoon) _Bool comingSoon; // @synthesize comingSoon=_comingSoon;
- (void)_initializeDatesStrings;	// IMP=0x00000000000231fd
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000023035
- (id)initWithDictionary:(id)arg1 brandID:(id)arg2;	// IMP=0x0000000000022fac

@end
