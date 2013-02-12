/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DADContactsSearchQuery : DADSearchQuery {
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(retain) NSString *searchScope; /* unknown property attribute: V_searchScope */
@property(retain) NSString *searchBase; /* unknown property attribute: V_searchBase */

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;

- (void)dealloc;
- (NSUInteger)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDADContactsSearchQuery:(id)arg1;
- (id)searchBase;
- (id)searchScope;
- (void)setSearchBase:(id)arg1;
- (void)setSearchScope:(id)arg1;

@end