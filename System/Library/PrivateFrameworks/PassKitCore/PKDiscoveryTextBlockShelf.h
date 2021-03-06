//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKDiscoveryTextBlockShelf
{
    long long _style;	// 32 = 0x20
    NSString *_bodyKey;	// 40 = 0x28
    NSString *_ledeKey;	// 48 = 0x30
    NSString *_sectionHeaderLineKey;	// 56 = 0x38
    NSString *_localizedBody;	// 64 = 0x40
    NSString *_localizedLede;	// 72 = 0x48
    NSString *_localizedSectionHeaderLine;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002f63e3
- (void).cxx_destruct;	// IMP=0x00000000002f67ba
@property(retain, nonatomic) NSString *localizedSectionHeaderLine; // @synthesize localizedSectionHeaderLine=_localizedSectionHeaderLine;
@property(retain, nonatomic) NSString *localizedLede; // @synthesize localizedLede=_localizedLede;
@property(retain, nonatomic) NSString *localizedBody; // @synthesize localizedBody=_localizedBody;
@property(readonly, nonatomic) NSString *sectionHeaderLineKey; // @synthesize sectionHeaderLineKey=_sectionHeaderLineKey;
@property(readonly, nonatomic) NSString *ledeKey; // @synthesize ledeKey=_ledeKey;
@property(readonly, nonatomic) NSString *bodyKey; // @synthesize bodyKey=_bodyKey;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f6515
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002f63eb
- (id)description;	// IMP=0x00000000002f6246
- (unsigned long long)hash;	// IMP=0x00000000002f614c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f6018
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;	// IMP=0x00000000002f5efd
- (void)localizeWithBundle:(id)arg1;	// IMP=0x00000000002f5ee1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f5d73

@end

