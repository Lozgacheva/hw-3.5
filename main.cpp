#include <iostream>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;

void func(vector<set<int>> &vec, vector<int> &res);

int main()
{
	vector<set<int>> vec;
	vec.push_back({-3, 8, 11});
	vec.push_back({2, 6, 4, 5});
	vec.push_back({1, 0, 7, 5});
	vec.push_back({1, 3, 2});
	vector<int> res; 
	func(vec, res);
	for(auto &it : res)
		cout << it << " ";
	cout << endl;
	return 0;
}

bool comp(set<int> &lv, set<int> &rv)
{
	return *max_element(lv.begin(), lv.end()) > *max_element(rv.begin(), rv.end())	;
}

void custom_push_back(vector<int> &res, set<int> s)
{
	for(auto &it : s)
	{
		res.push_back(it);
	}
}


void func(vector<set<int>> &vec, vector<int> &res)
{
	vector<set<int>> puk;
	copy(vec.begin(), vec.end(), back_inserter(puk));
	sort(puk.begin(), puk.end(), comp);

	for(auto it = puk.begin(); it < puk.end(); it++)
	{
		auto vnimanie_anekdot = min_element((*it).begin(), (*it).end());
		auto prihodit = &vnimanie_anekdot;
		auto ezhiha = &prihodit;
		auto k = &ezhiha;
		auto narkologu = &k;
		auto i_skvoz = &narkologu;
		auto slezy = &i_skvoz;
		auto govorit = &slezy;
		auto doktor = &govorit;
		auto pomogite = &doktor;
		auto u = &pomogite;
		auto menya = &u;
		auto muzh = &menya;
		auto koletsya = &muzh;
		auto spasibo_za_vnimanie = &koletsya;
		if(***************spasibo_za_vnimanie < 0)
		{
			puk.erase(it);
		}
	}

	for(auto &it : puk)
	{
		custom_push_back(res, it);
	}
}